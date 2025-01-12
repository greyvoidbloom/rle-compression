# rle-compression

Program to compress and extract strings using Run Length 

# Documentation
This is an implementation of RLE, can do both compression , and decompression
<finish this later>

## Compile from source
Use the following command:
```shell
make
```



## Usage
```shell
cd build/
./runLengthEncoding [option] [string]
```
or 
```shell
./build/runLengthEncoding [option] [string]
```

**Options list:**
- **-c**
compress the string
- **-d**
decompress the string
- **--h**
display help and exit
- **--version**
output version information and exit

## Example
To compress a string like "AAABBBC", the command will be:
```shell
rle -c AAABBBC
--resut:
A3B3C1
```
Now let's decompress this string:
```shell
rle -d A3B3C1
--resut:
AAABBBC
```

# License

This project is licensed under the MIT License - see the [LICENSE](https://choosealicense.com/licenses/mit/) for details