#include <iostream>
#include <vector>
#include <algorithm>

// • Acessando a documentação do site http://www.cplusplus.com/, 
// implemente um programa com a seguinte rotina:
// • Solicita para o usuário um conjunto de números inteiros 
// (quantidade arbitrária)
// • Imprime este conjunto na ordem em que o usuário digitou
// • Apresenta qual é o menor número digitado
// • Apresenta qual é o maior número digitado
// • Imprime os números digitados em ordem crescente

using namespace std;

int main()
{
    vector<int> nums;
    int n, ammount;

    cout << "Digite a quantidade de numeros a serem digitados";
    cin >> ammount;

    cout << "Digite os numeros inteiros: ";

    for (int i; i<ammount; i++)
    {
        cin >> n;
        nums.push_back(n);
    }

    // Apresenta os numeros na odem em que foram digitados
    cout << "Numeros na ordem em que foram digitados: ";
    for (int n: nums)
    {
        cout << n << " ";
    }
    cout << endl;

    int min = *min_element(nums.begin(), nums.end());
    int max = *max_element(nums.begin(), nums.end());

    cout << "Menor numero digitado: " << min << endl;
    cout << "Maior numero digitado: " << max << endl;

    sort(nums.begin(), nums.end());

    for (int n: nums)
    {
        cout << n << " ";
    }
    cout << endl;


    return 0;   
}