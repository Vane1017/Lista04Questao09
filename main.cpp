#include <iostream>

using namespace std;


struct noArvore
{
    int valor;
    struct noArvore *left;
    struct noArvore *right;
};


struct noArvore *novoNo(int data) {
  struct noArvore *noArvore = (struct noArvore *)malloc(sizeof(struct noArvore));
  noArvore->valor = data;
  noArvore->left = NULL;
  noArvore->right = NULL;
  return (noArvore);
};

int main()
{
    struct noArvore *noRaiz = novoNo(0);
    noRaiz->left = novoNo(1);
    noRaiz->right = novoNo(2);
    cout << "Arvore criada!" << endl;
    return 0;
}
