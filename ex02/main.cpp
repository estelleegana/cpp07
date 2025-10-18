// #include <iostream>
// #include "Array.hpp"
// #include "Array.tpp"

// #define RED     "\033[31m"
// #define GREEN   "\033[32m"
// #define YELLOW  "\033[33m"
// #define BLUE    "\033[34m"

// void printTestHeader(const std::string& testName) {
//     std::cout << "\n" << BLUE << "=== " << testName << " ===" << RESET << std::endl;
// }

// void testEmptyArray() {
//     printTestHeader("Test 1: Construction sans paramètre (tableau vide)");
    
//     Array<int> empty;
//     std::cout << "Taille du tableau vide: " << empty.size() << std::endl;
    
//     try {
//         std::cout << "Tentative d'accès à empty[0]: ";
//         std::cout << empty[0] << std::endl;
//     } catch (const std::exception& e) {
//         std::cout << RED << "Exception attrapée: " << e.what() << RESET << std::endl;
//     }
// }

// void testArrayWithSize() {
//     printTestHeader("Test 2: Construction avec taille n");
    
//     Array<int> arr(5);
//     std::cout << "Taille du tableau: " << arr.size() << std::endl;
    
//     std::cout << "Valeurs par défaut: ";
// 	for (unsigned int a = 0; a < arr.size(); a++)
// 		arr[a] = 0;
//     for (unsigned int i = 0; i < arr.size(); i++) {
//         std::cout << arr[i] << " ";
//     }
//     std::cout << std::endl;
    
//     std::cout << "Modification des valeurs..." << std::endl;
//     for (unsigned int i = 0; i < arr.size(); i++) {
//         arr[i] = i * 10;
//     }
    
//     std::cout << "Nouvelles valeurs: ";
//     for (unsigned int i = 0; i < arr.size(); i++) {
//         std::cout << arr[i] << " ";
//     }
//     std::cout << std::endl;
// }

// void testCopyConstructor() {
//     printTestHeader("Test 3: Constructeur de copie");
    
//     Array<int> original(5);
//     for (unsigned int i = 0; i < original.size(); i++) {
//         original[i] = i + 1;
//     }
    
//     std::cout << "Tableau original: ";
//     for (unsigned int i = 0; i < original.size(); i++) {
//         std::cout << original[i] << " ";
//     }
//     std::cout << std::endl;
    
//     Array<int> copy(original);
//     std::cout << "Copie créée, taille: " << copy.size() << std::endl;
    
//     std::cout << "Contenu de la copie: ";
//     for (unsigned int i = 0; i < copy.size(); i++) {
//         std::cout << copy[i] << " ";
//     }
//     std::cout << std::endl;
    
//     std::cout << "Modification de la copie..." << std::endl;
//     for (unsigned int i = 0; i < copy.size(); i++) {
//         copy[i] = i * 100;
//     }
    
//     std::cout << "Tableau original après modification de la copie: ";
//     for (unsigned int i = 0; i < original.size(); i++) {
//         std::cout << original[i] << " ";
//     }
//     std::cout << std::endl;
    
//     std::cout << "Copie après modification: ";
//     for (unsigned int i = 0; i < copy.size(); i++) {
//         std::cout << copy[i] << " ";
//     }
//     std::cout << std::endl;
    
//     std::cout << GREEN << "✓ Les tableaux sont indépendants" << RESET << std::endl;
// }

// void testAssignmentOperator() {
//     printTestHeader("Test 4: Opérateur d'affectation");
    
//     Array<int> arr1(3);
//     for (unsigned int i = 0; i < arr1.size(); i++) {
//         arr1[i] = i + 10;
//     }
    
//     Array<int> arr2(5);
//     for (unsigned int i = 0; i < arr2.size(); i++) {
//         arr2[i] = i + 20;
//     }
    
//     std::cout << "arr1 (taille " << arr1.size() << "): ";
//     for (unsigned int i = 0; i < arr1.size(); i++) {
//         std::cout << arr1[i] << " ";
//     }
//     std::cout << std::endl;
    
//     std::cout << "arr2 (taille " << arr2.size() << "): ";
//     for (unsigned int i = 0; i < arr2.size(); i++) {
//         std::cout << arr2[i] << " ";
//     }
//     std::cout << std::endl;
    
//     std::cout << "Affectation: arr2 = arr1" << std::endl;
//     arr2 = arr1;
    
//     std::cout << "arr2 après affectation (taille " << arr2.size() << "): ";
//     for (unsigned int i = 0; i < arr2.size(); i++) {
//         std::cout << arr2[i] << " ";
//     }
//     std::cout << std::endl;
    
//     std::cout << "Modification de arr2..." << std::endl;
//     for (unsigned int i = 0; i < arr2.size(); i++) {
//         arr2[i] = i + 50;
//     }
    
//     std::cout << "arr1 après modification de arr2: ";
//     for (unsigned int i = 0; i < arr1.size(); i++) {
//         std::cout << arr1[i] << " ";
//     }
//     std::cout << std::endl;
    
//     std::cout << "arr2 après modification: ";
//     for (unsigned int i = 0; i < arr2.size(); i++) {
//         std::cout << arr2[i] << " ";
//     }
//     std::cout << std::endl;
    
//     std::cout << GREEN << "✓ Les tableaux sont indépendants" << RESET << std::endl;
// }

// void testBoundsChecking() {
//     printTestHeader("Test 5: Vérification des limites");
    
//     Array<int> arr(3);
//     for (unsigned int i = 0; i < arr.size(); i++) {
//         arr[i] = i;
//     }
    
//     std::cout << "Tableau de taille " << arr.size() << std::endl;
    
//     std::cout << "Accès valide arr[0]: " << arr[0] << std::endl;
//     std::cout << "Accès valide arr[2]: " << arr[2] << std::endl;
    
//     try {
//         std::cout << "Tentative d'accès arr[3] (hors limites): ";
//         std::cout << arr[3] << std::endl;
//     } catch (const std::exception& e) {
//         std::cout << RED << "Exception attrapée: " << e.what() << RESET << std::endl;
//     }
    
//     try {
//         std::cout << "Tentative d'accès arr[100] (hors limites): ";
//         std::cout << arr[100] << std::endl;
//     } catch (const std::exception& e) {
//         std::cout << RED << "Exception attrapée: " << e.what() << RESET << std::endl;
//     }
// }

// void testWithStrings() {
//     printTestHeader("Test 6: Tableau de strings");
    
//     Array<std::string> strings(3);
//     strings[0] = "Hello";
//     strings[1] = "World";
//     strings[2] = "!";
    
//     std::cout << "Contenu: ";
//     for (unsigned int i = 0; i < strings.size(); i++) {
//         std::cout << strings[i] << " ";
//     }
//     std::cout << std::endl;
    
//     Array<std::string> stringsCopy(strings);
//     stringsCopy[0] = "Bonjour";
    
//     std::cout << "Original: " << strings[0] << std::endl;
//     std::cout << "Copie: " << stringsCopy[0] << std::endl;
// }

// void testWithDoubles() {
//     printTestHeader("Test 7: Tableau de doubles");
    
//     Array<double> doubles(4);
//     for (unsigned int i = 0; i < doubles.size(); i++) {
//         doubles[i] = (i + 1) * 3.14;
//     }
    
//     std::cout << "Valeurs: ";
//     for (unsigned int i = 0; i < doubles.size(); i++) {
//         std::cout << doubles[i] << " ";
//     }
//     std::cout << std::endl;
// }

// int main() {
//     std::cout << YELLOW << "╔════════════════════════════════════╗" << std::endl;
//     std::cout << "║   Tests du template Array (ex02)  ║" << std::endl;
//     std::cout << "╚════════════════════════════════════╝" << RESET << std::endl;
    
//     testEmptyArray();
//     testArrayWithSize();
//     testCopyConstructor();
//     testAssignmentOperator();
//     testBoundsChecking();
//     testWithStrings();
//     testWithDoubles();
    
//     std::cout << "\n" << GREEN << "✓ Tous les tests terminés!" << RESET << std::endl;
    
//     return 0;
// }


//main de l'enonce
#include <cstdlib>
#include <iostream>
#include "Array.hpp"
#include "Array.tpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}