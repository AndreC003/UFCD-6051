#include <stdio.h>

// Função para exibir o cronograma fictício
void cronograma() {
    printf("\n--- Cronograma da Semana ---\n");
    printf("Segunda-feira:\n  - Reunião de planejamento às 09:00\n  - Revisão do projeto às 14:00\n");
    printf("Terça-feira:\n  - Desenvolvimento de software às 10:00\n  - Almoço com cliente às 12:30\n");
    printf("Quarta-feira:\n  - Treinamento da equipe às 09:00\n  - Apresentação dos resultados às 15:00\n");
    printf("Quinta-feira:\n  - Análise de desempenho às 11:00\n  - Sessão de brainstorming às 16:00\n");
    printf("Sexta-feira:\n  - Reunião de feedback às 10:00\n  - Encerramento da semana às 17:00\n");
    printf("----------------------------\n");
}

// Função para o sub-menu "Visualizar Cronograma"
void visualizarCronograma() {
    int opcaoSubmenu = 0;

    while (opcaoSubmenu != 2) {  // Loop até o usuário escolher "Voltar ao Menu"
        printf("\nOpção selecionada: Visualizar Cronograma\n");
        printf("1. Cronograma\n");
        printf("2. Voltar ao Menu\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcaoSubmenu);

        switch (opcaoSubmenu) {
            case 1:
                cronograma();  // Chama a função que exibe o cronograma fictício
                break;
            case 2:
                printf("Voltando ao menu principal...\n");
                break;
            default:
                printf("Opção inválida! Por favor, escolha uma opção válida.\n");
        }
    }
}

// Função para marcar opções
void marcarOpcoes() {
    printf("Opção selecionada: Marcar Opções\n");
    // Aqui pode adicionar a lógica para marcar opções
}

// Função para atividade de monitorização
void atividadeMonitorizacao() {
    printf("Opção selecionada: Atividade de Monitorização\n");
    // Aqui pode adicionar a lógica para a atividade de monitorização
}

// Função para mediação
void mediacao() {
    printf("Opção selecionada: Mediação\n");
    // Aqui pode adicionar a lógica para a mediação
}

int main() {
    int opcao = 0;

    while (opcao != 5) {  // Loop até o usuário selecionar a opção de sair (5)
        // Exibe o menu principal
        printf("\nMenu:\n");
        printf("1. Visualizar Cronograma\n");
        printf("2. Marcar Opções\n");
        printf("3. Atividade de Monitorização\n");
        printf("4. Mediação\n");
        printf("5. Exit\n");
        printf("Escolha uma opção: ");
        
        // Lê a opção do usuário
        scanf("%d", &opcao);

        // Executa a ação com base na escolha do usuário
        switch (opcao) {
            case 1:
                visualizarCronograma();  // Chama o sub-menu "Visualizar Cronograma"
                break;
            case 2:
                marcarOpcoes();
                break;
            case 3:
                atividadeMonitorizacao();
                break;
            case 4:
                mediacao();
                break;
            case 5:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida! Por favor, escolha uma opção válida.\n");
        }
    }

    return 0;
}