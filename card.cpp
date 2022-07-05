#include "card.h"

int Card::get_point(){
    if(ifdeploy || number == 13) return 0;
    else return number;
}

void stack_init(Cardstack &stack){
    //Use index to shuffle the card
    std::vector<int> n;
    for(int i = 0; i < stack_size; i++) n.push_back(i);
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(n.begin(), n.end(), g);

    //Push the card according to the shuffled index list
    int k = 0;
    while(stack.size() != stack_size){
        stack.push(Card(n[k] % suit_size, static_cast<Color>(n[k] % color_num)));
        k++;
    }
}
