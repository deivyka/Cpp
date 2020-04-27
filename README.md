# Folder description
C++ scripts from VS_Code


## Markdown Cheatsheet
[Cheatsheet for Markdown](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet)

[Updated Cheatsheet for Markdown](https://www.markdownguide.org/basic-syntax/)

## Git Cheatsheet
[GitHub Cheatsheet for Git commands](https://github.github.com/training-kit/downloads/github-git-cheat-sheet.pdf)

[Cheatsheet for Git commands](https://shortcode.dev/git-cheatsheet#add-all-files)

## Manual Stuff
#### Create a new repo in GitHub and then sync a VSCode folder
```
echo "# New Repo" >> README.md
git init
git add README.md
git commit -m "first commit"
git remote add origin https://github.com/user/repo.git
git push -u origin master             
```

#### Clone this repo
```
git clone https://github.com/deivyka/cpp
```

#### Get updates done by other collaborators
```
git fetch origin              
git status 
git pull
```

#### Upload Changes: Add files, commit and push
```
git add .
git commit -m “Add comment here”
git push
```
