#include <stdio.h>
#include "Generator.h"
#include "playMode.h"

int main(){
    int generatedGrid[9][9];
    linearFill(generatedGrid);
    removeKDigits(generatedGrid);
    playing(generatedGrid);
    return 0;
}

