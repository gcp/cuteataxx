#include "pgn.hpp"
#include <iostream>

namespace parse {

namespace json {

void pgn(const nlohmann::json &j, match::Settings &ms) {
    if (j.find("pgn") == j.end()) {
        return;
    }

    const auto pgn = j.at("pgn");

    if (pgn.find("enabled") != pgn.end()) {
        ms.pgn_enabled = pgn.at("enabled");
    }

    if (pgn.find("verbose") != pgn.end()) {
        ms.pgn_verbose = pgn.at("verbose");
    }

    if (pgn.find("path") != pgn.end()) {
        ms.pgn_path = pgn.at("path");
    }

    if (pgn.find("event") != pgn.end()) {
        ms.pgn_event = pgn.at("event");
    }
}

}  // namespace json

}  // namespace parse
