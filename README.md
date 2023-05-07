<img align="left" src="icon/icon-readme.png">

# @xamidi/pmGenerator

Code initially extracted from [deontic-logic/proof-tool](https://github.com/deontic-logic/proof-tool "GitHub repository") (still private; [readme](https://deontic-logic.github.io/readme.html)). Can be used to generate improved versions of [pmproofs.txt](https://us.metamath.org/mmsolitaire/pmproofs.txt "us.metamath.org/mmsolitaire/pmproofs.txt") of the [mmsolitaire](https://us.metamath.org/mmsolitaire/mms.html "us.metamath.org/mmsolitaire/mms.html") project.  
Exemplary generated results are available at [xamidi/mmsolitaire](https://github.com/xamidi/mmsolitaire "GitHub repository").  
Eligible for high-performance computing. If you have access to a powerful computer, please consider to use this tool to further contribute to our knowledge regarding minimal proofs.  
The following table exemplary shows progress that has already been made.

|                                                                                         Load Files up to..                                                                                                      | Size of Files (with conclusions) [B] | Required Memory (approx.) [GiB] |                                                                 Recent Growth Factor                                                                 |
| --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------:| -------------------------------:| ----------------------------------------------------------------------------------------------------------------------------------------------------:|
| [dProofs29.txt](https://github.com/xamidi/pmGenerator/tree/master/data/dProofs-withConclusions "735'676'962 bytes compressed into 41'959'698 bytes (ratio approx. 17.5329)")                                    |                          735 676 962 |                            2.68 | [3.3613...](https://www.wolframalpha.com/input?i=516720692%2F153725015 "size(dProofs29.txt) / size(dProofs27.txt)")                                  |
| [dProofs31&#x2011;unfiltered31+.txt](https://mega.nz/file/G18AWIpC#B04xOdtQj_2PJJP0yNQxbim7pOgd-hwv1i1EVU6ZsTM "2'161'632'450 bytes compressed into 112'364'583 bytes (ratio approx. 19.2377)")                 |                        2 897 309 412 |                            9.84 | [4.1833...](https://www.wolframalpha.com/input?i=2161632450%2F516720692 "size(dProofs31-unfiltered31+.txt) / size(dProofs29.txt)")                   |
| [dProofs31.txt](https://mega.nz/file/P1ki0IKQ#mb0QCboSu0Ofgr9nxspZTdcGUaAHPLzt-rQ8y0TN27k "1'741'338'664 bytes compressed into 89'327'496 bytes (ratio approx. 19.4939)")<sup>✻</sup>                           |                        2 477 015 626 |                            7.95 | [3.3699...](https://www.wolframalpha.com/input?i=1741338664%2F516720692 "size(dProofs31.txt) / size(dProofs29.txt)")                                 |
| [dProofs33&#x2011;unfiltered31+.txt](https://mega.nz/file/3gVQSIJL#Qfa9CoUwsHWYYNHXYaP1mg61QQSJ1NSl1CHudK4g7BA "8'349'023'875 bytes compressed into 402'886'507 bytes (ratio approx. 20.7230)")                 |                       11 246 333 287 |                           36.49 | [3.8623...](https://www.wolframalpha.com/input?i=8349023875%2F2161632450 "size(dProofs33-unfiltered31+.txt) / size(dProofs31-unfiltered31+.txt)")    |
| [dProofs33&#x2011;unfiltered33+.txt](https://mega.nz/file/ixshHB7S#ktigbEzeOvCvFP8pruhC0NFfeK91p__eS_uZxBtIy0w "7'295'621'951 bytes compressed into 352'588'174 bytes (ratio approx. 20.6916)")                 |                       10 192 931 363 |                           29.43 | [4.1896...](https://www.wolframalpha.com/input?i=7295621951%2F1741338664 "size(dProofs33-unfiltered33+.txt) / size(dProofs31.txt)")                  |
| [dProofs35&#x2011;unfiltered31+.txt](https://mega.nz/file/2893yZ7S#JlCHv4uOajgBJPPE2W87F_LAPzkH0-FlF4_2OrccuC4 "30'717'801'573 bytes compressed into 1'400'853'331 bytes (ratio approx. 21.9279)")              |                       41 964 134 860 |                          130.52 | [3.6792...](https://www.wolframalpha.com/input?i=30717801573%2F8349023875 "size(dProofs35-unfiltered31+.txt) / size(dProofs33-unfiltered31+.txt)")   |
| [dProofs35&#x2011;unfiltered33+.txt](https://mega.nz/file/WwNViKRa#UBiPOFN4wRkMgetY60eAQi1oXVQ3fQdkcg7hFxB-Dfk "28'223'320'428 bytes compressed into 1'290'589'236 bytes (ratio approx. 21.8686)")              |                       38 416 251 791 |                          108.87 | [3.8685...](https://www.wolframalpha.com/input?i=28223320428%2F7295621951 "size(dProofs35-unfiltered33+.txt) / size(dProofs33-unfiltered33+.txt)")   |
| [dProofs37&#x2011;unfiltered31+.txt](https://mega.nz/file/6wUyDQzT#DQIJOLd5dCn-6V9sJWiJXeGRPUTUaA-7LqbGfLStjV0 "113'174'356'461 bytes compressed into 4'897'020'927 bytes (ratio approx. 23.1109)")<sup>✻</sup> |                      155 138 491 321 |                          485.12 | [3.6843...](https://www.wolframalpha.com/input?i=113174356461%2F30717801573 "size(dProofs37-unfiltered31+.txt) / size(dProofs35-unfiltered31+.txt)") |

This tool has been [posted](https://groups.google.com/g/metamath/c/6DzIY33mthE/m/K0I6UNoiAgAJ) to the Metamath mailing list.

#### Usage
    pmGenerator ( -g <limit> [-u] [-c] | -r <pmproofs file> <output file> [-i <prefix>] [-c] [-d] | -a <initials> <replacements file> <pmproofs file> <output file> [-s] [-l] [-w] [-d] | -f ( 0 | 1 ) [-i <prefix>] [-o <prefix>] [-d] | -p [-i <prefix>] [-s] [-t] [-x <limit>] [-y <limit>] [-o <output file>] [-d] )+ | -m <limit> [-s]
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
    -m: MPI-based multi-node filtering (-m <n>) of a first unfiltered proof file (with conclusions) at ./data/dProofs-withConclusions/dProofs<n>-unfiltered<n>+.txt. Creates dProofs<n>.txt.
        Cannot be combined with further commands.
        -s: disable smooth progress mode (lowers memory requirements, but makes worse progress predictions)

#### Examples
    pmGenerator -g -1
    pmGenerator -r "data/pmproofs.txt" "data/pmproofs-reducer.txt" -i "data/dProofs" -c -d
    pmGenerator -a SD data/pmproofs-reducer.txt data/pmproofs.txt data/pmproofs-result-styleAll-modifiedOnly.txt -s -w -d
    pmGenerator -g 19 -g 21 -u -r data/pmproofs-old.txt data/pmproofs-reducer.txt -d -a SD data/pmproofs-reducer.txt data/pmproofs-old.txt data/pmproofs-result-styleAll-modifiedOnly.txt -s -w -d
    pmGenerator -f 0 -o data/dProofs-withoutConclusions_ALL/dProofs -d
    pmGenerator -p -s -d -p -s -t -x 50 -y 100 -o data/plot_data_x50_y100.txt
    pmGenerator -m 17 -s

#### Multi-node Computing
For MPI-based filtering, each spawned process is multithreaded and attempts to use as many threads as the hardware specifies as concurrent. Therefore, it is ideal to spawn the same amount of processes and nodes.  
The following exemplary [Slurm](https://slurm.schedmd.com/documentation.html) batch script has been used via [sbatch](https://slurm.schedmd.com/sbatch.html) in order to reduce `dProofs31‑unfiltered31+.txt` to `dProofs31.txt`.

    #!/bin/zsh
    #SBATCH --job-name=pmGen-20
    #SBATCH --output=output_%J.txt
    #SBATCH --partition=c18m
    #SBATCH --account=rwth1392
    #SBATCH --time=3-00:00:00
    #SBATCH --mem-per-cpu=3900M
    #SBATCH --cpus-per-task=48
    #SBATCH --mail-user=<email>
    #SBATCH --mail-type=END,FAIL,TIME_LIMIT
    ## Number of nodes to use ; Also update #processes (via srun)!
    #SBATCH --nodes=6
    srun -n 6 ./pmGenerator -m 31

A subsequent query with [squeue](https://slurm.schedmd.com/squeue.html) would then reveal the following information:

    $ squeue -o "%.9i %.8j %.9P %.11a %.8u %.5C %.5D %.8T %.10M %.10l %.19S %R" -u <userID>
        JOBID     NAME PARTITION     ACCOUNT     USER  CPUS NODES    STATE       TIME TIME_LIMIT          START_TIME NODELIST(REASON)
     34762453 pmGen-20      c18m    rwth1392 <userID>   288     6  RUNNING       3:34 3-00:00:00 2023-05-04T07:52:24 ncm[0297,0306-0307,0315,0320-0321]

You may have a look at the [log file](log/dProofs31_6node_288cpu.log) generated by that computation.

#### Navigation
- [C++11 branch](https://github.com/xamidi/pmGenerator/tree/c++11)
- [C++20 branch](https://github.com/xamidi/pmGenerator/tree/master)

<sup>✻</sup><sub>Generation and utilization were performed with computing resources granted by RWTH Aachen University under project [rwth1392](pdf/rwth1392_abstract.pdf "View rwth1392_abstract.pdf").</sub>
