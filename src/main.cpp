#if !defined(GEODE_IS_IOS)
#include <Geode/Geode.hpp>
#include <Geode/utils/Keyboard.hpp>
#include <sabe.persistenceapi/include/PersistenceAPI.hpp>
using namespace geode::prelude;
using namespace persistenceAPI;
void setupKeybinds();
$on_mod(Loaded) {
    setupKeybinds();
}
void setupKeybinds() {
    using namespace keybinds;
    geode::BindManager::get()->registerBindable({
        "save-game"_spr,
        "Save game",
        "Hotkey for quick saving",
        { geode::Keybind::create(KEY_K, Modifier::None) },
        geode::Category::PLAY,
    });
}
#endif
