#if !defined(GEODE_IS_IOS)
#include <Geode/Geode.hpp>
#include <sabe.persistenceapi/include/PersistenceAPI.hpp>
using namespace geode::prelude;
using namespace persistenceAPI;

$on_mod(Loaded) {
    // keybind registration now handled natively by Geode v5
    Mod::get()->addKeybind({
        "save-game"_spr,
        "Save game",
        "Hotkey for quick saving",
        KEY_K
    });
}
#endif
