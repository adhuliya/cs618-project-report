# Remove temporary files
# The list matches .gitignore list

rm -R *.log *.aux *.ps *.dvi *.toc *.blg *.out *.bbl 

# when NOT using bibtex

latex main && latex main && latex main && dvips main.dvi && ps2pdf main.ps

# when using bibtex
#latex main && bibtex main && latex main && latex main && dvips main.dvi && ps2pdf main.ps
