#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

void afficherPile(const std::vector<int>& pile)
{
	if (pile.empty()) // if pile.size == 0
		std::cout << "Vide";

	for (auto element : pile)
		std::cout << element << ' ';

	std::cout << "\tCapacite: " << pile.capacity() << "  Taille: " << pile.size() << "\n";
}

int main(){

    vector<int> stack {};
    afficherPile(stack);

    stack.push_back(1);
    afficherPile(stack);

    stack.reserve(5);
    afficherPile(stack);

    stack.push_back(2);
    stack.push_back(5);
    stack.push_back(10);
    afficherPile(stack);

    stack.pop_back();
    afficherPile(stack);

    stack.resize(10);
    afficherPile(stack);

    stack.reserve(5);
    afficherPile(stack);

    cout<<"Derniere valeur : "<<stack.back();

    return 0;
}

