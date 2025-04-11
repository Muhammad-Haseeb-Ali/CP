#include<bits/stdc++.h>
using namespace std;


int main () {
    int a  = 20;
    int a2 = 19;
    int b = 30;

    int *p_a = &a;
    int *p_a2 = &a2;
    int *p_b = &b;

    int **p_p_a = &p_a;
    int **p_p_b = &p_b;

    cout << **p_p_a;

    p_p_a = &p_a2;

    cout << **p_p_a;
}