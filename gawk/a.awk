#!/usr/bin/awk -f

BEGIN {
    FS="|"
}

{
    split($1, name, ":")
    split($2, age, ":")
    split($3, city, ":")
    split($4, job, ":")
    split($5, salary, ":")
    details[city[2]] = details[city[2]] "\nName: " name[2] "\nAge: " age[2] "\nJob: " job[2] "\nSalary: " salary[2] "\n-----"
}

END {
    for (c in details) {
        print "City: " c
        print details[c]
    }
}