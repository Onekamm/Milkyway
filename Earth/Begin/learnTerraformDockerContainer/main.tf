terraform {
  required_providers {
    docker = {
      source  = "kreuzwerker/docker"
      version = "~> 3.0.1"
    }
  }
}

provider "docker" {}

resource "docker_image" "nginx" {
  name         = "nginx"
  keep_locally = false
}

resource "docker_container" "nginx" {
  image = docker_image.nginx.image_id
  name  = var.container_name

mounts {
    target = "/usr/share/nginx/html/index.html"
    source = abspath("${path.module}/index.html")
    type   = "bind"
  }

  ports {
    internal = 80
    external = 8080
  }
}

