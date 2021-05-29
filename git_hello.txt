# git e uma ferramenta para rastrear as versoes dos arquivos de um projeto

#git ou github? qual a diferenca?
git e a ferramenta
github e a plataforma (gitlab, bitbucket, azure, aws)

# o que e HEAD?
e a versao em que estou, a versao na qual estou trabalhando

# o que e branch?
uma linha do tempo paralela (back to the future)
ramificacao do projeto, permite trabalhar no mesmo projeto sem conflitar com o desenvolvimento de outras pessoas

# o que e branch local e remoto? qual a diferenca?
branch local e o branch da nossa maquina onde codamos
branch remoto e a branch onde esta hospedado

# o que e stage?
e um lugar onde preparamos o conteudo do commit

# comandos

git status - mostra branch em que estamos, quais sao os arquivos que foram modificados e nao rastreados

git branch - mostra as branches
    -D     - deleta branch local

git checkout <nome da branch> - troca de branch
    -b                        - cria a branch e da checkout nela

git pull - atualiza a branch local

git add - prepara as alteracoes para o commit

git commit - "carimba a linha do tempo", cria a versao com as alteracoes do stage (realizada pelo git add)
