<img align="left" src="icon/icon-readme.png">

# @xamidi/pmGenerator

Code extracted from [deontic-logic/proof-tool](https://github.com/deontic-logic/proof-tool) (still private; [readme](https://deontic-logic.github.io/readme.html)). Can be used to generate improved versions of [pmproofs.txt](https://us.metamath.org/mmsolitaire/pmproofs.txt "us.metamath.org/mmsolitaire/pmproofs.txt") of the [mmsolitaire](https://us.metamath.org/mmsolitaire/mms.html "us.metamath.org/mmsolitaire/mms.html") project.  
Exemplary generated results are available at [xamidi/mmsolitaire](https://github.com/xamidi/mmsolitaire "GitHub repository"). Eligible for shared memory high-performance computing. If you have access to a powerful computer, please consider to use this tool to further contribute to our knowledge regarding minimal proofs.  
The following table exemplary shows progress that has already been made.

|                                            Load Files up to..                                            | Size of Files (with conclusions) [B] | Required Memory (approx.) [GiB] |
| -------------------------------------------------------------------------------------------------------- | ------------------------------------:| -------------------------------:|
| [dProofs29.txt](https://github.com/xamidi/pmGenerator/tree/master/data/dProofs-withConclusions)          |                          735 676 962 |                            2.68 |
| [dProofs31-unfiltered31+.txt](https://mega.nz/file/G18AWIpC#B04xOdtQj_2PJJP0yNQxbim7pOgd-hwv1i1EVU6ZsTM) |                        2 897 309 412 |                            9.84 |
| [dProofs33-unfiltered31+.txt](https://mega.nz/file/3gVQSIJL#Qfa9CoUwsHWYYNHXYaP1mg61QQSJ1NSl1CHudK4g7BA) |                       11 246 333 287 |                           36.49 |

This tool has been [posted](https://groups.google.com/g/metamath/c/6DzIY33mthE/m/K0I6UNoiAgAJ) to the Metamath mailing list.

#### Usage
    pmGenerator ( -g <limit> [-u] [-c] | -r <pmproofs file> <output file> [-i <prefix>] [-c] [-d] | -a <initials> <replacements file> <pmproofs file> <output file> [-s] [-l] [-w] [-d] | -f ( 0 | 1 ) [-i <prefix>] [-o <prefix>] [-d] | -p [-i <prefix>] [-s] [-t] [-x <limit>] [-y <limit>] [-o <output file>] [-d] )+
    -g: Generate proof files
        -u: unfiltered (significantly faster, but generates redundant proofs)
        -c: proof files without conclusions, requires additional parsing
    -r: Replacements file creation based on proof files
        -i: customize input file path prefix ; default: "data/dProofs-withConclusions/dProofs"
        -c: proof files without conclusions, requires additional parsing ; sets default input file path prefix to "data/dProofs-withoutConclusions/dProofs"
        -d: print debug information
    -a: Apply replacements file
        -s: style all proofs (replace proofs with alphanumerically smaller variants)
        -l: list all proofs (i.e. not only modified proofs)
        -w: wrap results
        -d: print debug information
    -f: Create proof files with removed (-f 0) or added (-f 1) conclusions from proof files of the other variant
        -i: customize input file path prefix ; default: "data/dProofs-withConclusions/dProofs" or "data/dProofs-withoutConclusions/dProofs"
        -o: customize output file path prefix ; default: "data/dProofs-withoutConclusions/dProofs" or "data/dProofs-withConclusions/dProofs"
        -d: print debug information
    -p: Print conclusion length plot data
        -i: customize input file path prefix ; requires files with conclusions ; default: "data/dProofs-withConclusions/dProofs"
        -s: measure symbolic length (in contrast to conclusion representation length)
        -t: table arrangement, one data point per row
        -x: upper horizontal limit
        -y: upper vertical limit
        -o: print to given output file
        -d: print debug information

#### Examples
    pmGenerator -g -1
    pmGenerator -r "data/pmproofs.txt" "data/pmproofs-reducer.txt" -i "data/dProofs" -c -d
    pmGenerator -a SD data/pmproofs-reducer.txt data/pmproofs.txt data/pmproofs-result-styleAll-modifiedOnly.txt -s -w -d
    pmGenerator -g 19 -g 21 -u -r data/pmproofs-old.txt data/pmproofs-reducer.txt -d -a SD data/pmproofs-reducer.txt data/pmproofs-old.txt data/pmproofs-result-styleAll-modifiedOnly.txt -s -w -d
    pmGenerator -f 0 -o data/dProofs-withoutConclusions_ALL/dProofs -d
    pmGenerator -p -s -d -p -s -t -x 50 -y 100 -o data/plot_data_x50_y100.txt

#### Navigation
- [C++11 branch](https://github.com/xamidi/pmGenerator/tree/c++11)
- [C++20 branch](https://github.com/xamidi/pmGenerator/tree/master)
