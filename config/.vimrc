syntax on "ativa sintaxe - marca palavras chave das linguagens
colorscheme miramare "configura tema
set cursorline "marca linha atual do cursor
set colorcolumn=80 "regua de 80 chars
set number relativenumber "configura linhas hibridas
set showcmd "mostra os comandos no modo normal

set nowrap "nao ha quebra de linha
set wildmenu "menu de sugestao

set list "mostrar whitespace
set listchars=space:· "espaco vira esse ponto
set listchars+=tab:»\  "tab comeca com » e preenche com espacos (sem ponto)
set autoindent "coloca tabs de forma inteligente
set tabstop=4 "tab para a cada 4 espacos
set shiftwidth=4 "tab no maximo 4 espacos
set softtabstop=4 "tab para ate 4 espacos

set laststatus=2 "mostra barra de status
"set statusline=%l,%c\  "linha,coluna
set statusline=%l,%c%V\  "linha,coluna e virtual(tab)
set statusline+=%F "caminho do arquivo
set statusline+=\ %m "arquivo foi alterado?

set incsearch "quando buscar por uma palavra, ele vai marcando enquanto escreve
set hlsearch "mostra todas os resultados encontrados
"esconde a marcacao da ultima busca usando comando ':<Enter><Enter>"
nnoremap <silent> <Enter> :noh<Enter><Enter>

" autocomplete de alguns simbolos
"inoremap " ""<left>
"inoremap ' ''<left>
"inoremap ( ()<left>
"inoremap [ []<left>
"inoremap { {}<left>
"inoremap {<CR> {<CR>}<ESC>O
"inoremap {;<CR> {<CR>};<ESC>O
