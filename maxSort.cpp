#include <iostream>
#include <vector>
using namespace std;

// function declarations
void maxSort(vector<int>& list, int i, int j);
void swap(int& a, int& b);
void print(const vector<int>& list);

int main() {

    vector<int> v(5);  // vector to be sorted
    // initialize v
    /* your code here */
    v = {6,1,3,2,1};
    int currentMax = 0;



    // print the unsorted v
    /* your code here */
    cout << "Unsorted vector: " << endl;
   print(v);
   cout << endl;


    // sort v
    /* your code here */
    maxSort(v, 0, 0);


    // print the sorted v
    /* your code here */
    cout << endl;
   cout << "Sorted Vector: " << endl;
    print (v);


    return 0;
}

/* the function definitions */

//Max sort function
void maxSort(vector<int>& v, int i, int j) {


    for (int i = v.size() - 1; i >= 0; i--) {
        /*complete the code*/


        int currentMax = 0;


   if (j<=i){
       // for(j = 0; j<=i; j++){
            if (v.at(j) >= v.at(currentMax)){
                currentMax = j;}
                swap(v.at(currentMax), v.at(i));
                cout << "currentMax: " << currentMax << " ";


            maxSort(v, i, j+1);


            /*complete the code*/
        }

   }

}

// swap function
void swap(int& a, int&b){
    /*your code here*/
    int temp = 0;
    temp = a;
    a= b;
    b = temp;
}

// print function
void print(const vector<int>& list){
    /*your code here*/
    for (int i = 0; i < list.size(); i++) {

        cout << list.at(i) << " ";
    }
}

