# Hello World de git???
Git e uma ferramenta para rastrear as versoes dos arquivos de um projeto

## Git ou Github? Qual a Diferenca?
- git e a ferramenta
- github e a plataforma (gitlab, bitbucket, azure, aws)

## O que e HEAD?
E a versao em que estou, a versao na qual estou trabalhando

## O que e branch?
Uma linha do tempo paralela (back to the future).

Ramificacao do projeto, permite trabalhar no mesmo projeto sem conflitar com o desenvolvimento de outras pessoas

## O que e branch local e remoto? qual a diferenca?
- branch local e o branch da nossa maquina onde codamos
- branch remoto e a branch onde esta hospedado

## O que e stage?
E um lugar onde preparamos o conteudo a ser salvo no commit

## Comandos

```
git status
```
mostra branch em que estamos, quais sao os arquivos que foram modificados e nao rastreados

---

```
git branch
```
lista as branches local

---


```
git branch -D <nome da branch>
```
deleta branch local

---


```
git checkout <nome da branch>
```
troca de branch

---

 
```
git checkout -b <nome da branch>
```
cria uma nova branch e da checkout nela

---

 
```
git pull
```
atualiza a branch local

---


```
git add <arquivos...>
```
prepara as alteracoes para o commit

---


```
git commit -m "<mensagem de identificacao>"
```
"carimba a linha do tempo", cria a versao com as alteracoes do stage (realizada pelo git add)
