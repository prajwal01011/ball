#include <raylib.h>
 

int main(){
    
    InitWindow(800, 800, "ball");
    SetTargetFPS(60);

    //Game loop
    while(WindowShouldClose() == false){

        // 1. Event Handling

        // 2. Updating Code

        // 3. Drawing
        BeginDrawing();
        EndDrawing();
        
    }

    CloseWindow();

    return 0;
}