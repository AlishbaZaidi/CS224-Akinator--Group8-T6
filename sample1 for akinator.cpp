// #include <iostream>
// #include <string>

// struct LocationNode {
//     std::string location;
//     LocationNode* children;

//     LocationNode(const std::string& loc) : location(loc), children(nullptr) {}
// };

// struct QuestionNode {
//     std::string question;
//     QuestionNode* yesNode;
//     QuestionNode* noNode;

//     QuestionNode(const std::string& q) : question(q), yesNode(nullptr), noNode(nullptr) {}
// };

// class Akinator {
// private:
//     QuestionNode* root;

// public:
//     Akinator() : root(nullptr) {}

//     void buildDatabase() {
//         // Build your database here by adding nodes to the tree
//         root = new QuestionNode("Is it indoors?");
        
//         // First floor
//         root->yesNode = new QuestionNode("Which floor is it?");
//         root->yesNode->yesNode = buildFloor("Ground floor");
//         root->yesNode->noNode = buildFloor("First floor");
        
//         // Add more floors or locations as needed
//     }

//     QuestionNode* buildFloor(const std::string& floorName) {
//         QuestionNode* floorNode = new QuestionNode("Which location on " + floorName + "?");
//         floorNode->yesNode = buildLocations(floorName);
//         return floorNode;
//     }

//     LocationNode* buildLocations(const std::string& floorName) {
//         LocationNode* locationsNode = new LocationNode(floorName);

//         // Add specific locations for the given floor
//         if (floorName == "Ground floor") {
//             locationsNode->children = buildGroundFloorLocations();
//         } else if (floorName == "First floor") {
//             locationsNode->children = buildFirstFloorLocations();
//         }

//         // Add more conditions and locations as needed

//         return locationsNode;
//     }

//     LocationNode* buildGroundFloorLocations() {
//         LocationNode* groundFloor = new LocationNode("Courtyard");
//         // Add more locations specific to the ground floor
//         return groundFloor;
//     }

//     LocationNode* buildFirstFloorLocations() {
//         LocationNode* firstFloor = new LocationNode("Auditorium");
//         // Add more locations specific to the first floor
//         return firstFloor;
//     }

//     void playGame() {
//         QuestionNode* currentNode = root;
//         while (currentNode != nullptr && currentNode->yesNode != nullptr) {
//             std::cout << currentNode->question << " (yes/no): ";
//             std::string answer;
//             std::cin >> answer;

//             if (answer == "yes") {
//                 currentNode = currentNode->yesNode;
//             } else {
//                 currentNode = currentNode->noNode;
//             }
//         }

//         if (currentNode != nullptr && currentNode->yesNode == nullptr) {
//             displayLocations(currentNode->noNode);
//         } else {
//             std::cout << "Sorry, I couldn't determine the location." << std::endl;
//         }
//     }

    
// void displayLocations(QuestionNode* questionNode) {
//     std::cout << "You are at " << questionNode->question << std::endl;
//     if (questionNode->yesNode != nullptr) {
//         std::cout << "Available locations:" << std::endl;
//         displayChildLocations(questionNode->yesNode, 1);
//     }
// }


//     void displayChildLocations(LocationNode* node, int depth) {
//         if (node != nullptr) {
//             for (int i = 0; i < depth; ++i) {
//                 std::cout << "  ";
//             }
//             std::cout << "- " << node->location << std::endl;

//             // Recursively display child locations
//             displayChildLocations(node->children, depth + 1);
//         }
//     }
// };


// void playGame() {
//     QuestionNode* currentNode = root;
//     while (currentNode != nullptr && currentNode->yesNode != nullptr) {
//         std::cout << currentNode->question << " (yes/no): ";
//         std::string answer;
//         std::cin >> answer;

//         if (answer == "yes") {
//             currentNode = currentNode->yesNode;
//         } else {
//             currentNode = currentNode->noNode;
//         }
//     }

//     if (currentNode != nullptr && currentNode->yesNode == nullptr) {
//         displayLocations(currentNode);
//     } else {
//         std::cout << "Sorry, I couldn't determine the location." << std::endl;
//     }
// }

// // ...


// int main() {
//     Akinator akinator;
//     akinator.buildDatabase();
//     akinator.playGame();

//     return 0;
// }
