ldapsearch -LLLQ "uid=z*" cn | grep cn: | tr -d "cn: "| sort -rf
