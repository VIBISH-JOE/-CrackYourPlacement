class Solution:
    def intToRoman(self, num: int) -> str:
        str=""
        while num!=0:
            if num>=1000:
                str+="M"
                num-=1000
                continue
            if num>=900:
                str+="CM"
                num-=900
                continue
            if num>=500:
                str+="D"
                num-=500
                continue
            if num>=400:
                str+="CD"
                num-=400
                continue
            if num>=100:
                str+="C"
                num-=100
                continue
            if num>=90:
                str+="XC"
                num-=90
                continue
            if num>=50:
                str+="L"
                num-=50
                continue
            if num>=40:
                str+="XL"
                num-=40
                continue
            if num>=10:
                str+="X"
                num-=10
                continue
            if num>=9:
                str+="IX"
                num-=9
                continue
            if num>=5:
                str+="V"
                num-=5
                continue
            if num>=4:
                str+="IV"
                num-=4
                continue
            if num>=1:
                str+="I"
                num-=1
                continue
        return str
