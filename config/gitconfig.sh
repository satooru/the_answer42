#!/bin/bash
git config --global diff.tool vimdiff
git config --global difftool.prompt false
git config --global alias.d difftool
git config --global alias.s status
git config --global alias.l log
echo 'git configured'
