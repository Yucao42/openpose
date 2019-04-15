sudo dd if=/dev/zero of=/swapfile bs=64M count=32
sudo mkswap /swapfile
sudo swapon /swapfile
