const lines = [80];

// console.log(`MEDIA = ${media.toFixed(5)}`)

cities = {
  "61": "Brasilia",
  "71": "Salvador",
  "11": "Sao Paulo",
  "21": "Rio de Janeiro",
  "32": "Juiz de Fora",
  "19": "Campinas",
  "27": "Vitoria",
  "31": "Belo Horizonte"
}

if (typeof cities[lines[0]] === 'undefined') {
  console.log("DDD nao cadastrado");
} else {
  console.log(cities[lines[0]]);
}




