#include <fmt/core.h>
#include <spdlog/logger.h>
#include <spdlog/spdlog.h>

#include "player_tribute/player_tribute.h"

using namespace std;

int main() {
    spdlog::info("Initializing Player Tribute Data...");

    PlayerTribute& player_tribute{PlayerTribute::get()};
    if (!player_tribute.build()) {
        spdlog::error("Failed to build player tribute.");
        return 1;
    } else {
        spdlog::info("Player tribute built with hash: {}", player_tribute.get_hash());
    }

    spdlog::info("Completed building player tribute. Closing...");
    return 0;
}
