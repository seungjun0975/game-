h = float(input("키를 입력하세요 (cm):"))
weight = float(input("몸무게를 입력하세요 (kg):"))

height = h / 100
bmi = weight / (height** 2)

print("당신의 BMI는 {:.2f}입니다.".format(bmi))

if bmi < 18.5:
    print("체중 상태: 저체중")
elif 18.5 <= bmi < 23:
    print("체중 상태: 정상")
elif 23 <= bmi < 25:
    print("체중 상태: 과체중")
else:
    print("체중 상태: 비만")
