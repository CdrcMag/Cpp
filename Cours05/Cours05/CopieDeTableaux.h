#pragma once
#include <iostream>
#include <array>
#include <ctime>

using namespace std;

const int TAILLE = 10;

//prototypes
void InitTab(int a[]);
void GenererRandom(int[]);
void AfficherTableau(const int[]);
void CopierValeurPositives(const int[], int[]);