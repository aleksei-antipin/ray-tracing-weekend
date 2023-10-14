#include "src/Engine.h"

int main() {
    Engine *engine = new Engine();
    engine->Initialize();
    engine->Run();
    engine->DeInitialize();
    return 0;
}