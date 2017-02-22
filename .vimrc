set nocompatible
syntax on
set number
set mouse=a
set smartindent
set cursorline
set autoindent
set colorcolumn=81
set tabstop=4
set softtabstop=4
set title
set noexpandtab
colorscheme desert
hi StatusLine ctermbg=blue ctermfg=black
hi ColorColumn ctermbg=12

let mapleader = ","
nnoremap <leader>h :call Speed_open("vs")<cr>
nnoremap <leader>H :call Speed_open("sp")<cr>
