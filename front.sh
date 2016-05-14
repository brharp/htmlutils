#!/bin/sh

html <<HTML
<table>
<tr>
<td valign=top>
<ul class='menu'>
$(ls $(dirname ${PATH_TRANSLATED})/*/index.html | a | li -c menu-item)
</ul>
</td>
<td valign=top>
$(if [ -d "${PATH_TRANSLATED}" ]; then
  if [ -f "${PATH_TRANSLATED}/index.html" ]; then
    cat "${PATH_TRANSLATED}/index.html"
  fi
  echo "<menu>"
  ls -d ${PATH_TRANSLATED}/*/index.html | a | li  
  echo "</menu>"
fi)  
</td>
</tr>
</table>
HTML

