# Tìm hiểu về Linux kernel

## `randocha`

### Hướng dẫn nhanh

```bash
// Build module và user tool
$ make

// Nạp module
# insmod randocha.ko

// Chạy user tool để thử
# ./user_space

// Gỡ module
# rmmod randocha

// Dọn dẹp
$ make clean
```


### Ảnh chụp chạy mẫu

![image-20200619204001401](README.images/image-20200619204001401.png)

Hình: `randocha_module` đã được nạp thành công; công cụ test đã được gọi 4 lần.