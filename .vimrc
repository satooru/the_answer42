syntax on "ativa sintaxe - marca palavras chave das linguagens
colorscheme miramare "configura tema
set wildmenu "menu de sugestao

set number relativenumber "configura linhas hibridas
set nowrap "nao ha quebra de linha

set list "mostrar whitespace
set listchars=space:· "espaco vira esse ponto
set listchars+=tab:»\  "tab comeca com » e preenche com espacos (sem ponto)
set tabstop=4 "tab para a cada 4 espacos
set shiftwidth=4 "tab no maximo 4 espacos
set softtabstop=4 "tab para ate 4 espacos

set laststatus=2 "mostra barra de status
set statusline=%l,%c\  "linha,coluna
set statusline+=%F "caminho do arquivo
set statusline+=\ %m "arquivo foi alterado?

set incsearch "quando buscar por uma palavra, ele vai marcando enquanto escreve
set hlsearch "mostra todas os resultados encontrados
"esconde a marcacao da ultima busca usando comando ':<Enter><Enter>"
nnoremap <silent> <Enter> :noh<Enter><Enter>

set colorcolumn=80 "regua de 80 chars
"cor da regua prata
highlight ColorColumn ctermbg=248


