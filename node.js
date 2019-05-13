// const lines = [[12, 1, 5.30], [16, 2, 5.10]];

const lines = ["vertebrado", "ave", "onivoro"]

const animal = {
  vertebrado: {
    ave: {
      carnivoro: "aguia",
      onivoro: "pomba"
    },
    mamifero: {
      onivoro: "homem",
      herbivoro: "vaca"
    }
  },
  invertebrado: {
    inseto: {
      hematofago: "pulga",
      herbivoro: "lagarta"
    },
    anelideo: {
      hematofago: "sanguessuga",
      onivoro: "minhoca"
    }
  }
}

console.log(animal[lines[0]][lines[1]][lines[2]])




