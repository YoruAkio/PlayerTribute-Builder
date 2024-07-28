#include "player_tribute.h"

#include <fmt/core.h>
#include <fmt/ranges.h>
#include <spdlog/spdlog.h>

#include <cstring>

#include "../utils/file_manager.h"

PlayerTribute::~PlayerTribute() { this->destroy(); }

bool PlayerTribute::build() {
    // Epic Players
    std::string epic_players{
        "`oHello hi player_tribute test\n"
        "`oDeveloper: YoruAkio"};

    // Exceptional Mentors
    std::string exceptional_mentors{"`eExceptional Mentors test message"};

    // print the data
    spdlog::info("Epic Players: \n{}", epic_players);
    spdlog::info("Exceptional Mentors: \n{}", exceptional_mentors);

    m_size = sizeof(uint32_t) + epic_players.length() + exceptional_mentors.length();
    m_data = static_cast<char *>(std::malloc(m_size));

    // return log size and data as string
    spdlog::info("Player Tribute Size: {}", m_size);

    // print the data
    std::string data_hex;
    for (auto byte : std::span(m_data, m_size)) {
        data_hex += fmt::format("{:02x}", byte);
    }
    spdlog::info("Player Tribute Data: {}", data_hex);

    FileManager::write_all_bytes("player_tribute.dat", m_data, m_size);

    m_hash = FileManager::GetRTHash(m_data, m_size);
    return true;
}
bool PlayerTribute::destroy() {
    std::free(m_data);
    return true;
}