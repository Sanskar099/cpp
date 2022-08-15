#include <iostream>
using namespace std;

class Shop
{
    int itemID[100];
    int itemPrice[100];
    int counter;

public:
    void setprice(void);
    void displayprice(void);
    void initcounter(void) { counter = 0; }
};
void Shop ::setprice(void)
{
    cout << "enter the item id of item number : "<<counter+1<<endl;
    cin >> itemID[counter];
    cout << "enter the price of the item: " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop :: displayprice(void)
{
   for (int i = 0; i < counter; i++)
   {
        cout<<"the price of the item "<<itemID[i]<<" is "<<itemPrice[i]<<endl;
   }
   
}
int main()
{
int i;
Shop store;
store.initcounter();
store.setprice();
store.setprice();
store.setprice();
store.displayprice();
    return 0;
}