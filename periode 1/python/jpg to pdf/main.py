from PIL import Image

image1 = Image.open(r'C:/Users/const/Desktop/jpg to pdf/input')
im1 = Image.convert('RGB')
im1.save(r'C:/Users/const/Desktop/jpg to pdf/output')