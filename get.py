import requests as r
x = r.get('https://w3schools.com/python/demopage.htm',None)
print(x.text)
print(x.status_code)
print(x.content)
print(x.links)
print(x.url)

'''
output:

<!DOCTYPE html>
<html>
<body>

<h1>This is a Test Page</h1>

</body>
</html>
200
b'<!DOCTYPE html>\r\n<html>\r\n<body>\r\n\r\n<h1>This is a Test Page</h1>\r\n\r\n</body>\r\n</html>'
{}
https://www.w3schools.com/python/demopage.htm

'''
