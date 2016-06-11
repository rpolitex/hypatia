#! /bin/sh

find . -type f | grep -v -e ".txt" -e ".git" -e "build/" -e "install/" | xargs checkpatch.pl -f --no-tree --no-summary --terse --show-types --subjective --ignore LONG_LINE,OPEN_BRACE,ELSE_AFTER_BRACE,MACRO_WITH_FLOW_CONTROL,LONG_LINE_COMMENT,NEW_TYPEDEFS,CAMELCASE,LINE_SPACING,BLOCK_COMMENT_STYLE,SPACING,PARENTHESIS_ALIGNMENT | more

