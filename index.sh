PATH=.:${PATH}
html <<HTML
<h1>News</h1>
<ul class='menu'>
$(ls *.html | a | li -c menu-item)
</ul>
HTML

