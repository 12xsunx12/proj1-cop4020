/*      @Author:            Regan O'Donnell
 *      @Professor:         Dr. Bernd Owsnicki-Klewe
 *      @Course Title:      Programming Languages
 *      @Course Number:     COP4020 202401 */

/*      ~ Code Formatting ~
 *      1. #include
 *      2. int main() {} */

#include "scanner.h"
#include "parser.h"

int main() {
    Scanner s("example-source-code-inputs/a7");
    s.scan();
    Parser p(s.getTokens());
    //s.printTokens();

    //p.printTokens();
    p.parse();

    return 0;
}
