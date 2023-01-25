#include <iostream>
using namespace std;

class RetailItem{
    string description;
    int unitsOnHand;
    double price;
    public:
        RetailItem(string a,int b, double c){
            description=a;
            unitsOnHand=b;
            price=c;
        }
        void setDescription(string a){
            description=a;
            }
        void setUnitsOnHand(int b){
            unitsOnHand=b;
        }
        void setPrice(double c){
            price=c;
        }
        string accessDescription(){
            return description;
        }
        int accessUnitsOnHand(){
            return unitsOnHand;
        }
        int accessPrice(){
            return price;
        }


};
int main() {
    RetailItem object1("Jacket", 12, 59.95);
    RetailItem object2("Designer Jeans", 40, 34.95);
    RetailItem object3("Shirt", 20, 24.95);

    cout<<object1.accessDescription()<<" "<<object1.accessUnitsOnHand()<<object1.accessPrice()<<endl;
    cout<<object2.accessDescription()<<" "<<object2.accessUnitsOnHand()<<object2.accessPrice()<<endl;
    return 0;
}
