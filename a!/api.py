import requests,json
from config import *

if __name__ == '__main__':
    url = 'http://www.houqinbao.com/hydropower/index.php?m=PayWeChat&c=IndexKd&a=find&schoolcode=13579'
    payload ={'flatname': flatname,'roomname': roomname}
    hd = {'X-Requested-With': 'XMLHttpRequest'}
    r=requests.post(url,headers=hd,data=payload)
    aDict=eval(r.text)
    print(aDict['data']['dushu'])
