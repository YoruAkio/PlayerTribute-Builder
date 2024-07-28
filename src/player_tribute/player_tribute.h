#pragma once
#include <cstdint>
#include <list>
#include <string>

class PlayerTribute {
public:
    PlayerTribute() = default;
    ~PlayerTribute();

    bool build();
    bool destroy();

    [[nodiscard]] uint32_t get_hash() const { return m_hash; }

public:
    static PlayerTribute& get() {
        static PlayerTribute ret;
        return ret;
    }

private:
    std::size_t m_size;
    char* m_data;

    uint32_t m_hash;
};