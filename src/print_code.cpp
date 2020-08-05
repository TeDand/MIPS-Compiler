#include "ast.hpp"

#include <iostream>
#include <fstream>

int main()
{
    const Expression *ast=parseAST_cin();
    ContextPtr context = new Context();

    

    ast->print_python(std::cout, context);
    std::cout<<std::endl;

    if(context->has_main()){
        std::cout << "#Boilerplate" << std::endl;
        std::cout << "if __name__ == \"__main__\":" << std::endl;
        std::cout << "    import sys" << std::endl;
        std::cout << "    ret=main()" << std::endl;
        std::cout << "    sys.exit(ret)" << std::endl;
    }
    
    return 0;
}

// int main(int argc, char* argv[]) {

//     ContextPtr context = new Context();

//     if (argc < 2) {
//         std::cerr << "Not enough arguments passed." << std::endl;
//         exit(10);
//     }

//     //AST* ast;
//     const Expression *ast;
//     if (argc < 3) {
//         std::cerr << "No input file specified. Using stdin." << std::endl;
//         ast=parseAST_cin();
//         //ast = parseAST();
//     } else {
//         ast=parseAST_file(argv[2]);
//         //ast = parseAST(argv[2]);
//     }

//     std::ostream* os = &std::cout;
//     std::ofstream tempStrm;
//     if (argc > 4) {
//         tempStrm.open(argv[4]);
//         if (tempStrm.is_open())
//             os = &tempStrm;
//         else
//             std::cerr << "Cannot open output file... Printing to stdout." << std::endl;
//     }

//     if (std::string(argv[1]) == "-S") {
//         //compile(ast, *os);
//         std::cout << "lol" << std::endl;
//     }
//     else if (std::string(argv[1]) == "--translate") {
//         ast->print_python(*os, context);

//         if(context->has_main()){
//             *os << "if __name__ == \"__main__\":" << std::endl;
//             *os << "    import sys" << std::endl;
//             *os << "    ret=main()" << std::endl;
//             *os << "    sys.exit(ret)" << std::endl;
//         }
//     }

//     tempStrm.close();

//     return 0;
// }
