What is a Makefile?
Make is Unix utility that is designed to start execution of a makefile. A makefile is a special file, containing shell commands, that you create and name makefile (or Makefile depending upon the system). While in the directory containing this makefile, you will type make and the commands in the makefile will be executed. If you create more than one makefile, be certain you are in the correct directory before typing make.
Make keeps track of the last time files (normally object files) were updated and only updates those files which are required (ones containing changes) to keep the sourcefile up-to-date. If you have a large program with many source and/or header files, when you change a file on which others depend, you must recompile all the dependent files. Without a makefile, this is an extremely time-consuming task.

As a makefile is a list of shell commands, it must be written for the shell which will process the makefile. A makefile that works well in one shell may not execute properly in another shell.

The makefile contains a list of rules. These rules tell the system what commands you want to be executed. Most times, these rules are commands to compile(or recompile) a series of files. The rules, which must begin in column 1, are in two parts. The first line is called a dependency line and the subsequent line(s) are called actions or commands. The action line(s) must be indented with a tab.

![giphy-2](https://user-images.githubusercontent.com/113894292/227013255-2b24d203-2baf-4a31-8bb0-cd94deb6bd2e.gif)
