// Working with files

/*
Claases for File Stream Operations:
                            -------
        --------------------| ios |
        |                   -------
        |                   |  |  | 
        |        ------------  |  ----------------
istream |        |             |                  |
file    |   -----------     -------------     -----------
        |   | istream |     | streambuf |     | ostream |
        |   -----------     -------------     -----------
        |        |  |             |             |    |
        |        |  |             --------------|----|-------------------
        |        |  ------------    -------------    |                  |
        |        |              |   |                |                  |
        |        |           ------------            |                  |
        |        |           | iostream |            |                  |
        |        |           ------------            |                  |
=========================================================================================
        |        |               |                   |                  |
        |   ------------    -----------         ------------        -----------
        |   | ifstream |    | fstream |         | ofstream |        | filebuf |
        |   ------------    -----------         ------------        -----------
        |        ^               ^                   ^
        |        |               |                   |
fstream |        --------------  |    ----------------
file    |                     |  |    |
        |                   ----------------
        |                   | fstream base |
        |                   ----------------
        |                        ^
        |                        |
        --------------------------

        fig: Stream classes for file operations (contained in fstream file)
*/
