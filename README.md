# Algoritmos e Tecnicas de Programação | Exercícios do Primeiro Semestre
Este repositório é destinado às listas de exercício passadas para a turma de Bacharelado em Ciências da Computação Noturno de 2025, no primeiro semestre do curso.

## Instruções
Cada lista deve ser separada em uma pasta que siga o padrão de nomenclatura, e sua autoria deve ser devidamente respeitada.

Com o avanço dos semestres, novos repositórios devem ser criados para conter as respectivas listas.
23/04/2025

## Construção de conhecimento 
No dia 23/04, após a aula de ATP, tinha de fazer o commit dos novos arquivos que gostaria de adicionar neste repositório.

### Situação
Clonei o repositório na máquina local e trouxe a pasta "lista-05" para dentro do repositório. Performei as ações necessárias (```add``` e ```commit```) e tive de me autenticar com o Github no momento do ```push```.
Uma vez autenticado, fiz o ```push``` do commit que tinha montado. Entretanto, as credenciais (name e email) do git naquela máquina pública pertenciam a outro usuário, que acabou ficando como autor do meu commit, no meu repositório. 

### Tratativa
É possível alterar estas credenciais do autor em um commit. Descobri essa solução no seguinte artigo: [How to replace author of a pushed commit](https://medium.com/@deshan.m/script-to-change-the-accidentally-committed-author-user-name-and-email-75a444ef8c5d)

**Resultado:** Funcionou! O nome do usuário errado desapareceu, com o meu usuário entrando no lugar e a organização dos commits se manteve a mesma. Novos clones do projeto também mantinham a organização de pastas no lugar. 

### Nova situação
Eu possuia em minha máquina pessoal um clone local do repositório em questão. No momento de fazer um ```pull```, todos os commits haviam tido seus ```hashs``` alterados. Isso faz com que haja dois commits para cada commit de fato, um com o ```hash``` original e outro com o ```hash``` novo.

Para descobrir o que aconteceria, resolvi fazer o push desses "8 novos commits" (cópias dos anteriores que já existiam, mas com ```hashs``` difernetes), junto do útlimo commit de *merge* 

**Resultado:** Agora, o projeto continua com todos os arquivos que deveria, mas com um número duas vezes maior de commits no histórico, dois para cada mensagem. 
Essa questão traz de fato desorganização, mas trouxe alguns aprendizados importantes:
1. Antes de fazer um commit em uma máquina pública, troque as *credenciais* do ```git```.
2. Quando colocar suas próprias *credenciais* ```git``` em uma máquina pública, apague-as após o uso.
3. Se o repo for público, adicione regras de segurança para decidir que usuários podem aplicar alterações e evitar erros como esse ou mesmo tentativas maliciosas.
4. Se cometer o erro e precisar alterar o autor do commit, saiba que todos os hashs serão trocados. Portanto, vale a pena fazer um novo clone do projeto e continuar dali, ao invés de fazer um ```pull``` em um repositório local já existente (caso não haja alterações não commitadas neste repo local, claro).