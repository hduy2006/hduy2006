# age = 18
# con_nit = False
# if age < 10:
# 	con_nit = True

# if  con_nit:
# 	print ("tre  thanh thieu nien")
# elif age == 18 :
# 	print("tre trau nhat")  
# elif age <= 18:
# 	print ("tre thanh nien")
# 	if age >= 14 and age <= 17:
# 		print("tre chau")
# 	else :
# 		print("siu tre nghe")
# else :
# 	print('nguoi lon')
import matplotlib.pyplot as plt
import numpy as np

# Tạo dữ liệu điểm bằng numpy
x = np.linspace(0, 10, 20)  # 20 điểm từ 0 đến 10
y = np.sin(x)  # Hàm sin tương ứng với x

# Tạo đồ thị trống
plt.figure()
plt.title("Vẽ các điểm liên tục với numpy")
plt.xlabel("Trục X")
plt.ylabel("Trục Y")

# Vòng lặp vẽ từng điểm liên tục
for i in range(len(x)):
    plt.scatter(x[i], y[i], color='blue')  # Vẽ điểm hiện tại
    plt.pause(0.3)  # Tạm dừng 0.3 giây
    plt.draw()  # Cập nhật đồ thị

# Hiển thị đồ thị cuối cùng
plt.show()
