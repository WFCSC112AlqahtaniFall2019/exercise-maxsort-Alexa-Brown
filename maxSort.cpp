#include <iostream>
#include <vector>
using namespace std;

// function declarations
void maxSort(vector<int>& list);
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
    maxSort(v);


    // print the sorted v
    /* your code here */
    cout << endl;
   cout << "Sorted Vector: " << endl;
    print (v);


    return 0;
}

/* the function definitions */

//Max sort function
void maxSort(vector<int>& list) {

    int j =0;

    for (int i = list.size() - 1; i >= 0; i--) {
        /*complete the code*/
        int currentMax = 0;

        for(j = 1; j<=i; j++){
            if (list.at(j) >= list.at(currentMax)){
                currentMax = j;
                swap(list.at(j), list.at(currentMax));
                cout << "currentMax: " << currentMax << " ";

            }

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

