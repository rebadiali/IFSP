typedef struct NO *arvAVL;

arvAVL *cria_arvAVL();

int insere_arvAVL(arvAVL *raiz, int valor);

int vazia_arvAVL(arvAVL *raiz);

int altura_arvAVL(arvAVL *raiz);

int totalNO_arvAVL(arvAVL *raiz);

void preOrdem_arvAVL(arvAVL *raiz);

void emOrdem_arvAVL(arvAVL *raiz);

void posOrdem_arvAVL(arvAVL *raiz);

int consulta_arvAVL(arvAVL *raiz, int valor);

void liberar_arvAVL(arvAVL *raiz);

struct NO *remove_atual(struct NO *atual);

int remove_arvAVL(arvAVL *raiz, int valor);
